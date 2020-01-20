//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class NSData, NSDate, NSNumber, NSString, SCCDCloudSyncOperationSnapshotID, SCCDGalleryProfile;

@interface _SCCDCloudSyncOperationSnapshot : NSManagedObject
{
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;
- (void)setPrimitiveSeqNumValue:(long long)arg1;
- (long long)primitiveSeqNumValue;
@property long long seqNumValue;
@property(readonly, nonatomic) SCCDCloudSyncOperationSnapshotID *objectID;

// Remaining properties
@property(retain, nonatomic) NSDate *createTimeUtc; // @dynamic createTimeUtc;
@property(retain, nonatomic) SCCDGalleryProfile *owner; // @dynamic owner;
@property(retain, nonatomic) NSData *payload; // @dynamic payload;
@property(retain, nonatomic) NSString *requestID; // @dynamic requestID;
@property(retain, nonatomic) NSNumber *seqNum; // @dynamic seqNum;
@property(retain, nonatomic) NSString *targetEntryId; // @dynamic targetEntryId;

@end
