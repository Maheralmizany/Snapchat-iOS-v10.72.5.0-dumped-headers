//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@protocol SIGPresentationContextInternal
- (void)triggerCompletionBlocks:(id <SIGPresentationContext>)arg1 complete:(_Bool)arg2;
- (void)triggerAnimationBlocks:(id <SIGPresentationContext>)arg1;
- (void)triggerSetupBlocks:(id <SIGPresentationContext>)arg1;
- (void)addCompletion:(void (^)(id <SIGPresentationContext>, _Bool))arg1;
- (void)addAnimation:(void (^)(id <SIGPresentationContext>))arg1;
- (void)addSetup:(void (^)(id <SIGPresentationContext>))arg1;
@end

