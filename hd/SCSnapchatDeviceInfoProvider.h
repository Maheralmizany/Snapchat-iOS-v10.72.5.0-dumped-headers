//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCSnapAirDeviceInfoProvider.h"

@interface SCSnapchatDeviceInfoProvider : NSObject <SCSnapAirDeviceInfoProvider>
{
    id <SCSnapAirShakeTicketAdapter> _adapter;
}

- (void).cxx_destruct;
- (_Bool)isUserloggedIn;
- (id)deviceBandWidth;
- (long long)networkConnectionType;
- (id)initWithSnapAirShakeTicketAdapter:(id)arg1;

@end

