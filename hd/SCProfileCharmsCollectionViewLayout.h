//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewFlowLayout.h"

@class NSArray, NSIndexPath;

@interface SCProfileCharmsCollectionViewLayout : UICollectionViewFlowLayout
{
    _Bool _isDuringTransitionAnimation;
    NSArray *_oldLayoutAttributes;
    NSArray *_currentLayoutAttributes;
    id <SCProfileCharmsCollectionViewLayoutDelegate> _delegate;
    NSIndexPath *_onScreenItemIndexPath;
}

@property(copy, nonatomic) NSIndexPath *onScreenItemIndexPath; // @synthesize onScreenItemIndexPath=_onScreenItemIndexPath;
@property(nonatomic) __weak id <SCProfileCharmsCollectionViewLayoutDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (void)prepareLayout;
- (void)didEndTransitionAnimation;
- (void)willStartTransitionAnimation;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;

@end

