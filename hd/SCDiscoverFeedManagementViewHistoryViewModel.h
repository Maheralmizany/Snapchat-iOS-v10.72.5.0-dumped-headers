//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDate, NSString, SCActionModel, SCNetworkImage;

@interface SCDiscoverFeedManagementViewHistoryViewModel : NSObject <NSCopying>
{
    NSString *_title;
    NSString *_subtitle;
    NSDate *_viewTime;
    SCNetworkImage *_thumbnailImage;
    SCActionModel *_tapActionModel;
}

@property(readonly, copy, nonatomic) SCActionModel *tapActionModel; // @synthesize tapActionModel=_tapActionModel;
@property(readonly, copy, nonatomic) SCNetworkImage *thumbnailImage; // @synthesize thumbnailImage=_thumbnailImage;
@property(readonly, copy, nonatomic) NSDate *viewTime; // @synthesize viewTime=_viewTime;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 viewTime:(id)arg3 thumbnailImage:(id)arg4 tapActionModel:(id)arg5;

@end
