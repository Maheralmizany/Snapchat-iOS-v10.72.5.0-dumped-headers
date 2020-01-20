//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIGestureRecognizer;

@protocol SCSearchTabTransitionControlling <NSObject>
@property(nonatomic) __weak id <SCSearchTabTransitionControllingDelegate> delegate;
- (struct CGRect)viewFrameForTabAtIndex:(unsigned long long)arg1 currentIndex:(unsigned long long)arg2 contentOffset:(struct CGPoint)arg3;
- (void)switchToTabAtIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (UIGestureRecognizer *)gestureRecognizerForTabTransition;
@end
