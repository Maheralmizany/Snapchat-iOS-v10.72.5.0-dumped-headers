//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol SCKeyboardObserverListener <NSObject>

@optional
- (void)keyboardWillChangeFrameWithDuration:(double)arg1 curve:(long long)arg2 beginFrame:(struct CGRect)arg3 endFrame:(struct CGRect)arg4;
- (void)keyboardWillHideWithDuration:(double)arg1 curve:(long long)arg2 beginFrame:(struct CGRect)arg3 endFrame:(struct CGRect)arg4;
- (void)keyboardWillShowWithDuration:(double)arg1 curve:(long long)arg2 beginFrame:(struct CGRect)arg3 endFrame:(struct CGRect)arg4;
@end
