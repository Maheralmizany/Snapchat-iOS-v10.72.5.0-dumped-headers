//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class SCActionModel;

@interface SCChatActionModelContainer : NSObject <NSCopying>
{
    SCActionModel *_metadataFetchActionModel;
    SCActionModel *_externalTapAction;
    SCActionModel *_externalLongPressAction;
}

@property(readonly, copy, nonatomic) SCActionModel *externalLongPressAction; // @synthesize externalLongPressAction=_externalLongPressAction;
@property(readonly, copy, nonatomic) SCActionModel *externalTapAction; // @synthesize externalTapAction=_externalTapAction;
@property(readonly, copy, nonatomic) SCActionModel *metadataFetchActionModel; // @synthesize metadataFetchActionModel=_metadataFetchActionModel;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMetadataFetchActionModel:(id)arg1 externalTapAction:(id)arg2 externalLongPressAction:(id)arg3;

@end
