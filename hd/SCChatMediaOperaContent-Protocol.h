//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"
#import "SCChatOperaContent.h"

@protocol SCChatMediaOperaContent <NSObject, SCChatOperaContent>
- (void)invalidateContent;
- (void)unarchiveContentWithCompletion:(void (^)(_Bool, long long))arg1;
- (void)loadContent;
- (long long)mediaType;
- (_Bool)isLoadStateFailed;
- (_Bool)isContentUnarchived;
- (_Bool)isContentLoadedInCache;
@end

