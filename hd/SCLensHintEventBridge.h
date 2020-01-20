//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LSAEffectComponentListener.h"
#import "SCTraceEnabled.h"

@class NSString, SCLensHintListenerAnnouncer;

@interface SCLensHintEventBridge : NSObject <SCTraceEnabled, LSAEffectComponentListener>
{
    SCLensHintListenerAnnouncer *_announcer;
}

- (void).cxx_destruct;
- (void)effectComponent:(id)arg1 hideAllHintsForEffectWithId:(id)arg2;
- (void)effectComponent:(id)arg1 effectId:(id)arg2 showHintWithId:(id)arg3;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

