//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCCameraCardTableViewCell.h"

@class NSString, UIActivityIndicatorView, UIView;

@interface SCScanCardTableViewCell : SCCameraCardTableViewCell
{
    UIView *_shadowView;
    _Bool _hasLoadedData;
    _Bool _hasLoadDataCompleted;
    _Bool _hasCardAppeared;
    _Bool _hasTransitionedToContent;
    _Bool _actionConsumed;
    _Bool _loadingData;
    CDUnknownBlockType _initialCardAnimationCompletion;
    long long _scanSource;
    long long _scanType;
    NSString *_scanData;
    UIActivityIndicatorView *_activityIndicatorView;
}

+ (void)reportEventWithScanType:(long long)arg1 source:(long long)arg2 scanActionType:(long long)arg3 action:(long long)arg4 scanData:(id)arg5 scannableId:(id)arg6 version:(int)arg7;
@property(nonatomic, getter=isLoadingData) _Bool loadingData; // @synthesize loadingData=_loadingData;
@property(nonatomic, getter=isActionConsumed) _Bool actionConsumed; // @synthesize actionConsumed=_actionConsumed;
@property(nonatomic) __weak UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) NSString *scanData; // @synthesize scanData=_scanData;
@property(nonatomic) long long scanType; // @synthesize scanType=_scanType;
@property(nonatomic) long long scanSource; // @synthesize scanSource=_scanSource;
@property(copy, nonatomic) CDUnknownBlockType initialCardAnimationCompletion; // @synthesize initialCardAnimationCompletion=_initialCardAnimationCompletion;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)cardWillAppear;
- (void)cardWillInsert;
- (void)transitionToContentAnimated:(_Bool)arg1;
- (void)loadDataComplete;
- (void)loadData;
- (void)_createCardShadow;
- (id)scanSourceContext;
- (id)initWithPreferredSize:(struct CGSize)arg1;
- (id)initWithPreferredHeight:(double)arg1;
- (struct CGRect)calculateDeepLinkIconFrameRect:(id)arg1 imageView:(id)arg2;
- (id)addSecondaryHeaderWithSize:(double)arg1 content:(id)arg2 target:(id)arg3 selector:(SEL)arg4;
- (void)performCrossfadeAnimationWithShowViews:(id)arg1 hideViews:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)performInitialAnimationWithHeaderView:(id)arg1 offset:(double)arg2 crossfadeHeader:(_Bool)arg3 hideViews:(id)arg4 showViews:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (id)addPrimaryHeaderWithSize:(double)arg1 content:(id)arg2 target:(id)arg3 selector:(SEL)arg4;
- (id)addSecondaryHeaderLabelWithText:(id)arg1;
- (id)addFooterButtonWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 showsDivider:(_Bool)arg4 aboveView:(id)arg5 topOffset:(double)arg6;
- (id)addFooterButtonWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 showsDivider:(_Bool)arg4;
- (id)addBorderedFooterButtonWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 showsDivider:(_Bool)arg4 topOffset:(double)arg5;
- (id)addActionButtonWithStyle:(unsigned long long)arg1 width:(double)arg2 title:(id)arg3 target:(id)arg4 selector:(SEL)arg5 atBottomOfView:(id)arg6 bottomOffset:(double)arg7;
- (id)addActionButtonWithWidth:(double)arg1 title:(id)arg2 target:(id)arg3 selector:(SEL)arg4 atBottomOfView:(id)arg5 bottomOffset:(double)arg6;
- (id)_addActionButtonWithStyle:(unsigned long long)arg1 width:(double)arg2 title:(id)arg3 target:(id)arg4 selector:(SEL)arg5 belowView:(id)arg6 offset:(double)arg7;
- (id)_addActionButtonWithWidth:(double)arg1 title:(id)arg2 target:(id)arg3 selector:(SEL)arg4 aboveView:(id)arg5 topOffset:(double)arg6;
- (id)addPlainButtonWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 aboveView:(id)arg4 topOffset:(double)arg5 showsDivider:(_Bool)arg6;
- (id)addBorderedButtonWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 aboveView:(id)arg4 topOffset:(double)arg5;
- (id)addActionButtonWithStyle:(unsigned long long)arg1 width:(double)arg2 title:(id)arg3 target:(id)arg4 selector:(SEL)arg5 belowView:(id)arg6 offset:(double)arg7;
- (id)addActionButtonWithWidth:(double)arg1 title:(id)arg2 target:(id)arg3 selector:(SEL)arg4 aboveView:(id)arg5;
- (id)addActionButtonWithWidth:(double)arg1 title:(id)arg2 target:(id)arg3 selector:(SEL)arg4;
- (id)addActionButtonWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 aboveView:(id)arg4 topOffset:(double)arg5;
- (id)addActionButtonWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 aboveView:(id)arg4;
- (id)createCircularHeaderViewWithDiameter:(double)arg1;
- (id)createHorizontalDividerView;
- (id)buttonWithStyle:(unsigned long long)arg1 title:(id)arg2 target:(id)arg3 selector:(SEL)arg4;
- (id)attributedStringWithFontSize:(double)arg1 fontWeight:(unsigned long long)arg2 textColor:(id)arg3 characterSpacing:(double)arg4 text:(id)arg5;
- (id)labelForAttributedText;
- (id)labelWithFontSize:(double)arg1 fontWeight:(unsigned long long)arg2 textColor:(id)arg3 textAlignment:(long long)arg4;
- (id)labelWithFontSize:(double)arg1 textColor:(id)arg2 textAlignment:(long long)arg3;
- (id)labelWithFontSize:(double)arg1 fontWeight:(unsigned long long)arg2 textColor:(id)arg3;
- (id)labelWithFontSize:(double)arg1 textColor:(id)arg2;
- (void)clearCardView;

@end

