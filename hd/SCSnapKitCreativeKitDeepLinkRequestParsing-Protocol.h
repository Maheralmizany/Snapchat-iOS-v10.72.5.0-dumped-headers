//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCCreativeKitParsedRequest, SCDeepLinkURL;

@protocol SCSnapKitCreativeKitDeepLinkRequestParsing <NSObject>
- (_Bool)isContentValid:(SCCreativeKitParsedRequest *)arg1;
- (void)parseDeepLinkURL:(SCDeepLinkURL *)arg1 success:(void (^)(SCCreativeKitParsedRequest *, NSString *))arg2 failure:(void (^)(NSString *, NSString *))arg3;
@end

