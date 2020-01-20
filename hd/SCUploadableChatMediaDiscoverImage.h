//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCUploadableChatImage.h"

@class SCDiscoverMediaBlob, UIColor;

@interface SCUploadableChatMediaDiscoverImage : SCUploadableChatImage
{
    SCDiscoverMediaBlob *_discoverMediaBlob;
    long long _discoverMediaType;
    UIColor *_discoverPrimaryColor;
    UIColor *_discoverSecondaryColor;
}

- (void).cxx_destruct;
- (id)successMessageTextColor;
- (id)successMessageBackgroundColor;
- (_Bool)isZipped;
- (id)bodyType;
- (long long)mediaType;
- (void)thumbnailMediaData:(CDUnknownBlockType)arg1;
- (void)setImage:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithID:(id)arg1 discoverMediaBlobMetadata:(id)arg2;
- (id)initWithID:(id)arg1 discoverMediaBlob:(id)arg2;

@end

