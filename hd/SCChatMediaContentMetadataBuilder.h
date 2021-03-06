//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SCChatMediaContentMetadataBuilder : NSObject
{
    NSString *_mediaId;
    long long _mediaLoadState;
    long long _mediaUploadState;
}

+ (id)chatMediaContentMetadataFromExistingChatMediaContentMetadata:(id)arg1;
+ (id)chatMediaContentMetadata;
- (void).cxx_destruct;
- (id)withMediaUploadState:(long long)arg1;
- (id)withMediaLoadState:(long long)arg1;
- (id)withMediaId:(id)arg1;
- (id)build;

@end

