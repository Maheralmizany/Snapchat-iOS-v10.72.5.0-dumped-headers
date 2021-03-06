//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface SCStoriesSnapReadReceiptConsistencyLoggingInfo : NSObject <NSCopying>
{
    _Bool _viewedValueFromReadReceipt;
    _Bool _viewedValueFromStoryResponse;
    NSString *_snapId;
    unsigned long long _type;
}

@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) _Bool viewedValueFromStoryResponse; // @synthesize viewedValueFromStoryResponse=_viewedValueFromStoryResponse;
@property(readonly, nonatomic) _Bool viewedValueFromReadReceipt; // @synthesize viewedValueFromReadReceipt=_viewedValueFromReadReceipt;
@property(readonly, copy, nonatomic) NSString *snapId; // @synthesize snapId=_snapId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSnapId:(id)arg1 viewedValueFromReadReceipt:(_Bool)arg2 viewedValueFromStoryResponse:(_Bool)arg3 type:(unsigned long long)arg4;

@end

