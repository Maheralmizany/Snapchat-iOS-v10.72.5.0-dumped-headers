//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString, SCActionModel, UIColor, UIImage;

@interface SCBitmojiFriendSelectorCellViewModel : NSObject <NSCopying>
{
    NSString *_title;
    UIColor *_textColor;
    UIImage *_icon;
    SCActionModel *_actionModel;
}

@property(readonly, copy, nonatomic) SCActionModel *actionModel; // @synthesize actionModel=_actionModel;
@property(readonly, copy, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(readonly, copy, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTitle:(id)arg1 textColor:(id)arg2 icon:(id)arg3 actionModel:(id)arg4;

@end

