//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class NSData, NSString, SCCDGallerySnap, SCCDGallerySnapMiniThumbnailID;

@interface _SCCDGallerySnapMiniThumbnail : NSManagedObject
{
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;
@property(readonly, nonatomic) SCCDGallerySnapMiniThumbnailID *objectID;

// Remaining properties
@property(retain, nonatomic) SCCDGallerySnap *snap; // @dynamic snap;
@property(retain, nonatomic) NSString *snapId; // @dynamic snapId;
@property(retain, nonatomic) NSData *thumbnailData; // @dynamic thumbnailData;

@end

