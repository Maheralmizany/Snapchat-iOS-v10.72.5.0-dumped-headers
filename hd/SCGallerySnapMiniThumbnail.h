//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCGallerySnapMiniThumbnail.h"

@class NSData, NSString;

@interface SCGallerySnapMiniThumbnail : NSObject <SCGallerySnapMiniThumbnail>
{
    NSString *_objectID;
    NSString *_snapId;
    NSData *_thumbnailData;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (id)parseManagedObject:(id)arg1;
+ (id)fetchMiniThumbnailWithSnapIds:(id)arg1 dataObjectContext:(id)arg2;
+ (id)fetchMiniThumbnailWithSnapId:(id)arg1 dataObjectContext:(id)arg2;
+ (id)fetchGallerySnapMiniThumbnailForSnap:(id)arg1 options:(id)arg2 dataObjectContext:(id)arg3;
+ (unsigned long long)countOfGallerySnapMiniThumbnailsWithOptions:(id)arg1 dataObjectContext:(id)arg2;
+ (id)fetchGallerySnapMiniThumbnailsWithOptions:(id)arg1 dataObjectContext:(id)arg2;
+ (id)gallerySnapMiniThumbnailWithSnapId:(id)arg1 thumbnailData:(id)arg2;
+ (id)allKeys;
+ (id)observe:(id)arg1 dataObjectContext:(id)arg2 queue:(id)arg3 changeHandler:(CDUnknownBlockType)arg4;
@property(readonly, copy, nonatomic) NSData *thumbnailData; // @synthesize thumbnailData=_thumbnailData;
@property(readonly, copy, nonatomic) NSString *snapId; // @synthesize snapId=_snapId;
@property(readonly, copy, nonatomic) NSString *objectID; // @synthesize objectID=_objectID;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithObjectID:(id)arg1 snapId:(id)arg2 thumbnailData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

