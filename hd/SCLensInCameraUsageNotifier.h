//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LSAEffectComponentListener.h"
#import "SCLensUIUpdateListener.h"
#import "SCLensUsageNotifierProtocol.h"

@class NSString, SCLens;

@interface SCLensInCameraUsageNotifier : NSObject <SCLensUsageNotifierProtocol, SCLensUIUpdateListener, LSAEffectComponentListener>
{
    id <SCLensUsageNotifierProtocol> _notifier;
    SCLens *_selectedLens;
}

- (void).cxx_destruct;
- (void)effectComponent:(id)arg1 didTurnOnEffectWithId:(id)arg2 features:(unsigned long long)arg3;
- (void)willShowLenses;
- (void)willDisplayLens:(id)arg1;
- (void)didUpdateActiveLensOrder:(id)arg1;
- (void)didSelectLens:(id)arg1;
- (void)didHideLenses;
- (void)didEndDisplayingLens:(id)arg1;
- (void)notifyLensWasUsed:(id)arg1;
- (id)initWithLensUsageNotifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

