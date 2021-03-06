//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class UIView;

@interface UIViewController (Cards)
+ (void)addNGSBottomCornersToView:(id)arg1;
+ (void)addNGSBottomCornersToView:(id)arg1 inRect:(struct CGRect)arg2;
+ (void)addNGSCornersToView:(id)arg1;
+ (void)addNGSCornersToView:(id)arg1 inRect:(struct CGRect)arg2;
+ (void)addNGSCornersToView:(id)arg1 inRect:(struct CGRect)arg2 withEdge:(unsigned long long)arg3 gap:(double)arg4;
+ (void)addCardCornersToView:(id)arg1;
+ (void)addCardCornersToView:(id)arg1 inRect:(struct CGRect)arg2;
+ (id)storiesCardGradientColors;
+ (id)chatCardGradientColors;
- (void)setSc_dimView:(id)arg1;
@property(readonly, nonatomic) UIView *sc_cardDimView;
- (void)styleCellForCard:(id)arg1 forIndexPath:(id)arg2;
- (void)_styleCellWithoutRoundedCorner:(id)arg1;
- (void)_styleCellWithRoundedCorner:(id)arg1;
- (void)updateCardBackground:(_Bool)arg1 ngsEnabled:(_Bool)arg2;
- (_Bool)_conformsToCardStylingProtocol;
- (id)_cardTableView;
@end

