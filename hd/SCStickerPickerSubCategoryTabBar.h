//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSLayoutConstraint, NSMutableArray, UIImageView, UIStackView;

@interface SCStickerPickerSubCategoryTabBar : UIView
{
    id <SCStickerPickerSubCategoryTabBarDataSource> _dataSource;
    id <SCStickerPickerSubCategoryTabBarDelegate> _delegate;
    UIImageView *__selectionIndicator;
    UIStackView *__stackView;
    NSMutableArray *__buttons;
    long long __selectedIndex;
    NSLayoutConstraint *__selectionIndicatorCenterXConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *_selectionIndicatorCenterXConstraint; // @synthesize _selectionIndicatorCenterXConstraint=__selectionIndicatorCenterXConstraint;
@property(nonatomic) long long _selectedIndex; // @synthesize _selectedIndex=__selectedIndex;
@property(retain, nonatomic) NSMutableArray *_buttons; // @synthesize _buttons=__buttons;
@property(retain, nonatomic) UIStackView *_stackView; // @synthesize _stackView=__stackView;
@property(retain, nonatomic) UIImageView *_selectionIndicator; // @synthesize _selectionIndicator=__selectionIndicator;
@property(nonatomic) __weak id <SCStickerPickerSubCategoryTabBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SCStickerPickerSubCategoryTabBarDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (void)_handlePan:(id)arg1;
- (void)_buttonWasTapped:(id)arg1;
- (void)selectSubCategoryAtIndex:(long long)arg1 triggerHaptics:(_Bool)arg2 animated:(_Bool)arg3;
- (void)_selectSubCategoryAtIndex:(long long)arg1 triggerHaptics:(_Bool)arg2;
- (void)_alignSelectionIndicator;
- (void)_removeSelectionIndicatorAlignment;
- (void)reloadData;
@property(readonly, nonatomic) long long numberOfItems;
- (id)initWithFrame:(struct CGRect)arg1;

@end

