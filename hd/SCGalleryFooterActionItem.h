//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SIGActionBarItem, SIGActionSheetCell, UIImage;

@interface SCGalleryFooterActionItem : NSObject
{
    NSString *_actionSheetTitle;
    NSString *_actionSheetSubtitle;
    NSString *_barTitle;
    UIImage *_barIcon;
    double _disabledOpacity;
    SIGActionBarItem *_actionBarItem;
    SIGActionSheetCell *_actionSheetCell;
    _Bool _enabled;
    unsigned long long _type;
    id <SCGalleryFooterActionItemDelegate> _delegate;
    NSString *_disabledAlertTitle;
    NSString *_disabledAlertDesc;
}

+ (unsigned long long)actionSheetTitleTypeForNumberOfSnapsSelect:(unsigned long long)arg1 numberOfPhotosSelect:(unsigned long long)arg2 numberOfVideosSelect:(unsigned long long)arg3;
+ (id)itemWithType:(unsigned long long)arg1 enabled:(_Bool)arg2 actionSheetTitleType:(unsigned long long)arg3;
@property(readonly, nonatomic) NSString *disabledAlertDesc; // @synthesize disabledAlertDesc=_disabledAlertDesc;
@property(readonly, nonatomic) NSString *disabledAlertTitle; // @synthesize disabledAlertTitle=_disabledAlertTitle;
@property(readonly, nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) __weak id <SCGalleryFooterActionItemDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)_handleActionSheetCellTap:(id)arg1;
- (void)_handleActionBarItemTap:(id)arg1;
- (id)actionSheetCell;
- (id)actionBarItem;
- (void)setDisabledAlertTitle:(id)arg1 desc:(id)arg2;
- (id)initWithType:(unsigned long long)arg1 enabled:(_Bool)arg2 actionSheetTitleType:(unsigned long long)arg3;

@end

