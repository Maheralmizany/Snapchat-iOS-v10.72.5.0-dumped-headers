//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSAttributedString, NSString, SCActionModel, SCUnifiedProfileBadgeViewModel;

@interface SCUnifiedActionMenuButtonItemViewModel : NSObject <NSCopying>
{
    NSAttributedString *_attributedLabel;
    NSString *_detailText;
    NSString *_buttonIconAsset;
    SCActionModel *_actionModel;
    SCUnifiedProfileBadgeViewModel *_badgeViewModel;
    struct CGSize _buttonIconSize;
}

@property(readonly, copy, nonatomic) SCUnifiedProfileBadgeViewModel *badgeViewModel; // @synthesize badgeViewModel=_badgeViewModel;
@property(readonly, copy, nonatomic) SCActionModel *actionModel; // @synthesize actionModel=_actionModel;
@property(readonly, nonatomic) struct CGSize buttonIconSize; // @synthesize buttonIconSize=_buttonIconSize;
@property(readonly, copy, nonatomic) NSString *buttonIconAsset; // @synthesize buttonIconAsset=_buttonIconAsset;
@property(readonly, copy, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
@property(readonly, copy, nonatomic) NSAttributedString *attributedLabel; // @synthesize attributedLabel=_attributedLabel;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAttributedLabel:(id)arg1 detailText:(id)arg2 buttonIconAsset:(id)arg3 buttonIconSize:(struct CGSize)arg4 actionModel:(id)arg5 badgeViewModel:(id)arg6;

@end

