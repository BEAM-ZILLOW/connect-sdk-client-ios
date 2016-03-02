//
//  GCValidatorRegularExpression.h
//  GlobalCollectSDK
//
//  Created for Global Collect on 05/06/14.
//  Copyright (c) 2014 Global Collect Services B.V. All rights reserved.
//

#import "GCValidator.h"

@interface GCValidatorRegularExpression : GCValidator

@property (strong, nonatomic, readonly) NSRegularExpression *regularExpression;

- (instancetype)initWithRegularExpression:(NSRegularExpression *)regularExpression;

@end