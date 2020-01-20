//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPRemoteSettingsProvider.h"

@class NSString;

@interface SPSimpleRemoteSettingsProvider : NSObject <SPRemoteSettingsProvider>
{
    NSString *_configUrlPath;
    NSString *_aiModelsBaseUrlPath;
}

@property(retain, nonatomic) NSString *aiModelsBaseUrlPath; // @synthesize aiModelsBaseUrlPath=_aiModelsBaseUrlPath;
@property(retain, nonatomic) NSString *configUrlPath; // @synthesize configUrlPath=_configUrlPath;
- (void).cxx_destruct;
- (void)obtainSettingsForOutput:(id)arg1;
- (id)initWithConfigUrlPath:(id)arg1 aiModelsBaseUrlPath:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
