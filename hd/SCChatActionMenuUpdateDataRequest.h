//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class SCChatActionMenuViewModel;

@interface SCChatActionMenuUpdateDataRequest : NSObject <NSCopying>
{
    unsigned long long _subtype;
    SCChatActionMenuViewModel *_set_viewModel;
    SCChatActionMenuViewModel *_update_viewModel;
}

+ (id)updateWithViewModel:(id)arg1;
+ (id)setWithViewModel:(id)arg1;
+ (id)reset;
- (void).cxx_destruct;
- (void)matchSet:(CDUnknownBlockType)arg1 update:(CDUnknownBlockType)arg2 reset:(CDUnknownBlockType)arg3;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

