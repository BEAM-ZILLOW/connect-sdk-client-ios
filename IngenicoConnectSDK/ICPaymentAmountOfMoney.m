//
//  ICPaymentAmountOfMoney.m
//  IngenicoConnectSDK
//
//  Created for Ingenico ePayments on 15/12/2016.
//  Copyright © 2017 Global Collect Services. All rights reserved.
//

#import <IngenicoConnectSDK/ICPaymentAmountOfMoney.h>
#import <IngenicoConnectSDK/ICSDKConstants.h>

@implementation ICPaymentAmountOfMoney {

}

- (instancetype)initWithTotalAmount:(long)totalAmount currencyCode:(NSString *)currencyCode {
    if ([kICCurrencyCodes rangeOfString:currencyCode].location == NSNotFound) {
        [NSException raise:@"Invalid currency code" format:@"Currency code %@ is invalid", currencyCode];
    }

    self = [super init];
    if (self) {
        _totalAmount = totalAmount;
        _currencyCode = currencyCode;
    }

    return self;
}

- (NSString *)description {
    return [NSString stringWithFormat:@"%ld-%@", (long) self.totalAmount, self.currencyCode];
}

@end
