//
//  ICIINStatus.h
//  IngenicoConnectSDK
//
//  Created for Ingenico ePayments on 15/12/2016.
//  Copyright © 2017 Global Collect Services. All rights reserved.
//

#ifndef IngenicoConnectSDKExample_ICIINStatus_h
#define IngenicoConnectSDKExample_ICIINStatus_h

typedef enum {
    ICSupported,
    ICUnsupported,
    ICUnknown,
    ICNotEnoughDigits,
    ICPending,
    ICExistingButNotAllowed
} ICIINStatus;

#endif
