//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@interface SCExtendedHitButton : UIButton
{
    struct UIEdgeInsets _hitEdgeInsets;
}

+ (id)SCExtendedHitButtonWithHitEdgeInsets:(struct UIEdgeInsets)arg1;
@property(nonatomic) struct UIEdgeInsets hitEdgeInsets; // @synthesize hitEdgeInsets=_hitEdgeInsets;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 hitEdgeInsets:(struct UIEdgeInsets)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

