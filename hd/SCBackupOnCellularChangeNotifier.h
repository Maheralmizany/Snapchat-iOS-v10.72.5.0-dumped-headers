//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCNetworkReconnectListener.h"
#import "SCServiceNotifier.h"

@class NSString, SCFeatureSettingsManager;

@interface SCBackupOnCellularChangeNotifier : NSObject <SCNetworkReconnectListener, SCServiceNotifier>
{
    id <SCObserving> _observeContext;
    id <SCPerforming> _performer;
    SCFeatureSettingsManager *_featureSettingsManager;
    double _waitTime;
}

- (void).cxx_destruct;
- (void)didReconnectToNetwork;
- (double)waitUntil:(double)arg1;
- (_Bool)_shouldBackupNow;
- (void)_updateWithBackupOnCellular:(_Bool)arg1;
- (void)dealloc;
- (id)initWithFeatureSettingsManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

