//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSAttributedString, SCLensExplorerLensAnimationViewModel, SCLensExplorerLensItem, UIColor, UIImage;

@interface SCLensExplorerLensCellViewModel : NSObject <NSCopying, NSCoding>
{
    _Bool _isDebugEnabled;
    SCLensExplorerLensItem *_lensItem;
    SCLensExplorerLensAnimationViewModel *_animationViewModel;
    unsigned long long _cellType;
    UIColor *_color;
    NSAttributedString *_creatorUserName;
    NSAttributedString *_lensName;
    double _debugButtonCornerPadding;
    UIImage *_previewImage;
    UIImage *_iconImage;
    struct CGSize _debugButtonSize;
    struct CGSize _fullCellSize;
    struct CGSize _previewSize;
    struct CGSize _iconSize;
}

+ (id)cellViewModelWithoutImagesWithViewModel:(id)arg1;
+ (id)cellViewModelWithViewModel:(id)arg1 animationModel:(id)arg2;
+ (id)cellViewModelWithViewModel:(id)arg1 iconImage:(id)arg2;
+ (id)cellViewModelWithViewModel:(id)arg1 previewImage:(id)arg2;
+ (id)cellViewModelWithLensExplorerItem:(id)arg1 configuration:(id)arg2 index:(unsigned long long)arg3 isTextRightToLeftDirection:(_Bool)arg4;
+ (id)loadingCellViewModelWithConfiguration:(id)arg1;
+ (id)colorForIndex:(unsigned long long)arg1;
@property(readonly, copy, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(readonly, copy, nonatomic) UIImage *previewImage; // @synthesize previewImage=_previewImage;
@property(readonly, nonatomic) struct CGSize iconSize; // @synthesize iconSize=_iconSize;
@property(readonly, nonatomic) struct CGSize previewSize; // @synthesize previewSize=_previewSize;
@property(readonly, nonatomic) struct CGSize fullCellSize; // @synthesize fullCellSize=_fullCellSize;
@property(readonly, nonatomic) _Bool isDebugEnabled; // @synthesize isDebugEnabled=_isDebugEnabled;
@property(readonly, nonatomic) double debugButtonCornerPadding; // @synthesize debugButtonCornerPadding=_debugButtonCornerPadding;
@property(readonly, nonatomic) struct CGSize debugButtonSize; // @synthesize debugButtonSize=_debugButtonSize;
@property(readonly, copy, nonatomic) NSAttributedString *lensName; // @synthesize lensName=_lensName;
@property(readonly, copy, nonatomic) NSAttributedString *creatorUserName; // @synthesize creatorUserName=_creatorUserName;
@property(readonly, copy, nonatomic) UIColor *color; // @synthesize color=_color;
@property(readonly, nonatomic) unsigned long long cellType; // @synthesize cellType=_cellType;
@property(readonly, copy, nonatomic) SCLensExplorerLensAnimationViewModel *animationViewModel; // @synthesize animationViewModel=_animationViewModel;
@property(readonly, copy, nonatomic) SCLensExplorerLensItem *lensItem; // @synthesize lensItem=_lensItem;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLensItem:(id)arg1 animationViewModel:(id)arg2 cellType:(unsigned long long)arg3 color:(id)arg4 creatorUserName:(id)arg5 lensName:(id)arg6 debugButtonSize:(struct CGSize)arg7 debugButtonCornerPadding:(double)arg8 isDebugEnabled:(_Bool)arg9 fullCellSize:(struct CGSize)arg10 previewSize:(struct CGSize)arg11 iconSize:(struct CGSize)arg12 previewImage:(id)arg13 iconImage:(id)arg14;
- (id)initWithCoder:(id)arg1;

@end

