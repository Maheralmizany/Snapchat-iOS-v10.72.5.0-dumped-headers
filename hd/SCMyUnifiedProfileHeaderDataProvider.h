//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCSnapchattersDataRequestListener.h"
#import "SCTraceEnabled.h"
#import "SCUnifiedProfileHeaderDataProviding.h"

@class NSString, SCLazy;

@interface SCMyUnifiedProfileHeaderDataProvider : NSObject <SCSnapchattersDataRequestListener, SCTraceEnabled, SCUnifiedProfileHeaderDataProviding>
{
    _Bool _showSettings;
    SCLazy *_snapchattersDataTracker;
    SCLazy *_userInfoProvider;
    id <SCUnifiedProfileHeaderDataProvidingDelegate> _delegate;
}

@property(nonatomic) __weak id <SCUnifiedProfileHeaderDataProvidingDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_settingsAssetName;
- (void)_reloadHeaderView;
- (void)didEndSnapchattersUpdateDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didStartSnapchattersUpdateDataRequest:(id)arg1;
- (void)headerViewModelWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithShowSettings:(_Bool)arg1 snapchattersDataTracker:(id)arg2 userInfoProvider:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

