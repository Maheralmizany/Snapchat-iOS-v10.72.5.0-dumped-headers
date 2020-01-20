//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString, SCActionModel, SCNetworkImage;

@interface SCOurStorySettingsSnapCellViewModel : NSObject <NSCopying>
{
    NSString *_id;
    SCNetworkImage *_image;
    NSString *_titleText;
    NSString *_timeAgo;
    unsigned long long _viewCount;
    unsigned long long _screenshotCount;
    SCActionModel *_tapCellActionModel;
    SCActionModel *_tapDeleteButtonActionModel;
    SCActionModel *_tapSaveButtonActionModel;
    long long _savingState;
}

@property(readonly, nonatomic) long long savingState; // @synthesize savingState=_savingState;
@property(readonly, copy, nonatomic) SCActionModel *tapSaveButtonActionModel; // @synthesize tapSaveButtonActionModel=_tapSaveButtonActionModel;
@property(readonly, copy, nonatomic) SCActionModel *tapDeleteButtonActionModel; // @synthesize tapDeleteButtonActionModel=_tapDeleteButtonActionModel;
@property(readonly, copy, nonatomic) SCActionModel *tapCellActionModel; // @synthesize tapCellActionModel=_tapCellActionModel;
@property(readonly, nonatomic) unsigned long long screenshotCount; // @synthesize screenshotCount=_screenshotCount;
@property(readonly, nonatomic) unsigned long long viewCount; // @synthesize viewCount=_viewCount;
@property(readonly, copy, nonatomic) NSString *timeAgo; // @synthesize timeAgo=_timeAgo;
@property(readonly, copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(readonly, copy, nonatomic) SCNetworkImage *image; // @synthesize image=_image;
@property(readonly, copy, nonatomic) NSString *id; // @synthesize id=_id;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithId:(id)arg1 image:(id)arg2 titleText:(id)arg3 timeAgo:(id)arg4 viewCount:(unsigned long long)arg5 screenshotCount:(unsigned long long)arg6 tapCellActionModel:(id)arg7 tapDeleteButtonActionModel:(id)arg8 tapSaveButtonActionModel:(id)arg9 savingState:(long long)arg10;

@end

