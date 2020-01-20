//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCNetworkConnectivityListener.h"
#import "SCServiceNotifier.h"

@class NSString;

@interface SCNetworkConnectivityNotifier : NSObject <SCNetworkConnectivityListener, SCServiceNotifier>
{
    unsigned long long _networkConnectivity;
    double _waitTime;
}

+ (id)notifierForNetworkConnectivity:(unsigned long long)arg1;
- (void)networkConnectivityStatusDidChange:(long long)arg1;
- (double)waitUntil:(double)arg1;
- (id)initWithNetworkConnectivity:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

