//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString, SCAdMediaCollectionItemAttachment, SCAdMediaImage;

@interface SCAdMediaCollectionItem : NSObject <NSCopying, NSCoding>
{
    SCAdMediaImage *_itemIcon;
    SCAdMediaCollectionItemAttachment *_itemAttachment;
    NSString *_title;
}

@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) SCAdMediaCollectionItemAttachment *itemAttachment; // @synthesize itemAttachment=_itemAttachment;
@property(readonly, copy, nonatomic) SCAdMediaImage *itemIcon; // @synthesize itemIcon=_itemIcon;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithItemIcon:(id)arg1 itemAttachment:(id)arg2 title:(id)arg3;
- (id)initWithCoder:(id)arg1;

@end

