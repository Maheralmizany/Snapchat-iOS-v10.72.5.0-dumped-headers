//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class SCCaptionStyleLabel, SCDynamicCaptionStyle, UIActivityIndicatorView, UIView;

@interface SCCaptionCarouselStyleCell : UICollectionViewCell
{
    SCDynamicCaptionStyle *_style;
    CDUnknownBlockType _delayShowActivityViewBlock;
    SCCaptionStyleLabel *_label;
    UIActivityIndicatorView *_styleLoadingView;
    UIView *_holderView;
}

+ (double)estimatedWidthWithCaptionStyle:(id)arg1;
@property(readonly, copy, nonatomic) SCDynamicCaptionStyle *style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)setCellWithCaptionStyle:(id)arg1 isSelected:(_Bool)arg2;
- (void)setCellWithDynamicCaptionStyle:(id)arg1 isSelected:(_Bool)arg2 fetcher:(id)arg3;
- (void)setSelected:(_Bool)arg1;

@end

