//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"
#import "SCComposerMarshallable.h"

@class NSString;

@protocol SCCStoryPlayerNativeUserStoryFetching <NSObject, SCComposerMarshallable>
- (void)getNativeUserStoryWithUserId:(NSString *)arg1 username:(NSString *)arg2 callback:(void (^)(id <SCCStoryPlayerNativeItem>, NSString *))arg3;
@end

