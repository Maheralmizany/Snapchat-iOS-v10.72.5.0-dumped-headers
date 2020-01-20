//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString, SCActionModel, SCDiscoverFeedManagementIconViewModel;

@interface SCDiscoverFeedManagementHiddenChannelViewModel : NSObject <NSCopying>
{
    _Bool _isOfficial;
    NSString *_hiddenChannelTitle;
    SCDiscoverFeedManagementIconViewModel *_iconViewModel;
    SCActionModel *_tapActionModel;
    SCActionModel *_unhideButtonActionModel;
    SCActionModel *_longPressActionModel;
}

@property(readonly, copy, nonatomic) SCActionModel *longPressActionModel; // @synthesize longPressActionModel=_longPressActionModel;
@property(readonly, copy, nonatomic) SCActionModel *unhideButtonActionModel; // @synthesize unhideButtonActionModel=_unhideButtonActionModel;
@property(readonly, copy, nonatomic) SCActionModel *tapActionModel; // @synthesize tapActionModel=_tapActionModel;
@property(readonly, copy, nonatomic) SCDiscoverFeedManagementIconViewModel *iconViewModel; // @synthesize iconViewModel=_iconViewModel;
@property(readonly, nonatomic) _Bool isOfficial; // @synthesize isOfficial=_isOfficial;
@property(readonly, copy, nonatomic) NSString *hiddenChannelTitle; // @synthesize hiddenChannelTitle=_hiddenChannelTitle;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithHiddenChannelTitle:(id)arg1 isOfficial:(_Bool)arg2 iconViewModel:(id)arg3 tapActionModel:(id)arg4 unhideButtonActionModel:(id)arg5 longPressActionModel:(id)arg6;

@end
