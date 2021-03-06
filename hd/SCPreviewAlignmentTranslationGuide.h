//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCPreviewAlignmentGuide.h"

@class UIView;

@interface SCPreviewAlignmentTranslationGuide : SCPreviewAlignmentGuide
{
    long long _alignmentType;
    UIView *_object;
    struct CGPoint _center;
    struct CGRect _contentFrame;
    struct UIEdgeInsets _edgeMargins;
}

@property(nonatomic) struct UIEdgeInsets edgeMargins; // @synthesize edgeMargins=_edgeMargins;
@property(nonatomic) struct CGRect contentFrame; // @synthesize contentFrame=_contentFrame;
@property(readonly, nonatomic) UIView *object; // @synthesize object=_object;
@property(readonly, nonatomic) struct CGPoint center; // @synthesize center=_center;
@property(readonly, nonatomic) long long alignmentType; // @synthesize alignmentType=_alignmentType;
- (void).cxx_destruct;
- (void)_layoutObjectAlignmentGuide;
- (void)_layoutAlignmentGuide;
- (void)showGuideInView:(id)arg1;
- (id)initWithObject:(id)arg1 contentFrame:(struct CGRect)arg2 alignmentType:(long long)arg3 center:(struct CGPoint)arg4 edgeMargins:(struct UIEdgeInsets)arg5;

@end

