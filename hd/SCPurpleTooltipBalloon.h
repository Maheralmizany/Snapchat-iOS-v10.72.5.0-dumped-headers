//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MASConstraint, UILabel;

@interface SCPurpleTooltipBalloon : UIView
{
    UILabel *_textLabel;
    UIView *_triangle;
    UIView *_backgroundRectangle;
    MASConstraint *_triangleCenterXConstraint;
    MASConstraint *_triangleRightConstraint;
    struct UIEdgeInsets _edgeInsets;
}

@property(retain, nonatomic) MASConstraint *triangleRightConstraint; // @synthesize triangleRightConstraint=_triangleRightConstraint;
@property(retain, nonatomic) MASConstraint *triangleCenterXConstraint; // @synthesize triangleCenterXConstraint=_triangleCenterXConstraint;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(retain, nonatomic) UIView *backgroundRectangle; // @synthesize backgroundRectangle=_backgroundRectangle;
@property(retain, nonatomic) UIView *triangle; // @synthesize triangle=_triangle;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (void).cxx_destruct;
- (struct CGSize)size;
- (void)setTriangleOffsetFromRight:(double)arg1;
- (void)setTriangleOffsetFromCenter:(double)arg1;
- (void)setRoundCornerRadius:(double)arg1;
- (void)setTooltipBackgroundAlpha:(double)arg1;
- (void)setText:(id)arg1;
- (void)setTextSize:(double)arg1;
- (id)_createTriangleWithTrianglePosition:(long long)arg1;
- (id)_trianglePathWithTrianglePosition:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 trianglePosition:(long long)arg2 edgeInsets:(struct UIEdgeInsets)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

