//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@interface CALayer (Animations)
- (void)addAnimation:(id)arg1 forKey:(id)arg2 didStart:(CDUnknownBlockType)arg3 didComplete:(CDUnknownBlockType)arg4;
- (void)_setDisabledValue:(id)arg1 forKeyPath:(id)arg2;
- (void)sc_removeAllAnimations;
- (void)sc_freezeAndRemoveAnimations;
- (_Bool)sc_isPaused;
- (void)sc_pause;
- (void)sc_resume;
- (void)sc_addAnimationWithKeypath:(id)arg1 toValue:(id)arg2;
@end

