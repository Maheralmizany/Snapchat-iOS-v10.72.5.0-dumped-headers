//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCFriendmojiService : NSObject
{
    id <SCHTTPMetadataService> _httpMetadataService;
    id <SCHTTPRequestModifier> _httpRequestModifier;
}

- (void).cxx_destruct;
- (void)_submitRequestWithParameters:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)resetToDefaultFriendmojiWithSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (void)updateFriendmojiDictWithSymbol:(id)arg1 type:(long long)arg2 source:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (id)initWithHTTPMetadataService:(id)arg1 httpRequestModifier:(id)arg2;

@end
