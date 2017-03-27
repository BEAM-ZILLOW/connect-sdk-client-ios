//
//  ICPaymentProductFields.h
//  IngenicoConnectSDK
//
//  Created for Ingenico ePayments on 15/12/2016.
//  Copyright © 2017 Global Collect Services. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ICPaymentProductFields : NSObject

@property (strong, nonatomic) NSMutableArray *paymentProductFields;

- (void)sort;

@end
