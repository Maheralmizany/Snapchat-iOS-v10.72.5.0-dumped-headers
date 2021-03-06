//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCLazy;

@interface SCLensUnlockerServiceDependencyProvider : NSObject
{
    SCLazy *_dataStoreWriter;
    SCLazy *_localLensCache;
    SCLazy *_scannableActionAPIProvider;
    SCLazy *_scannableUserUnlocker;
}

@property(readonly, nonatomic) SCLazy *scannableUserUnlocker; // @synthesize scannableUserUnlocker=_scannableUserUnlocker;
@property(readonly, nonatomic) SCLazy *scannableActionAPIProvider; // @synthesize scannableActionAPIProvider=_scannableActionAPIProvider;
@property(readonly, nonatomic) SCLazy *localLensCache; // @synthesize localLensCache=_localLensCache;
@property(readonly, nonatomic) SCLazy *dataStoreWriter; // @synthesize dataStoreWriter=_dataStoreWriter;
- (void).cxx_destruct;
- (id)initWithDataStoreWriter:(id)arg1 localLensCache:(id)arg2 scannableActionAPIProvider:(id)arg3 scannableUserUnlocker:(id)arg4;

@end

