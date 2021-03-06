//
//  ICValueMappingItem.h
//  IngenicoConnectSDK
//
//  Created for Ingenico ePayments on 15/12/2016.
//  Copyright © 2017 Global Collect Services. All rights reserved.
//

#import <Foundation/Foundation.h>
@class ICDisplayElement;
@interface ICValueMappingItem : NSObject

@property (strong, nonatomic) NSString *displayName;
@property (strong, nonatomic) NSArray<ICDisplayElement *>* displayElements;
@property (strong, nonatomic) NSString *value;

@end
