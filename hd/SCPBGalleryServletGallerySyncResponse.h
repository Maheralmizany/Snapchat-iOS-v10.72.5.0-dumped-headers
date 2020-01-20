//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, SCPBGalleryServletGalleryUserSetting, SCPBGalleryServletQuota;

@interface SCPBGalleryServletGallerySyncResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long backoffTime; // @dynamic backoffTime;
@property(nonatomic) long long batchHighSeqnum; // @dynamic batchHighSeqnum;
@property(nonatomic) long long batchLowSeqnum; // @dynamic batchLowSeqnum;
@property(copy, nonatomic) NSString *debugInfo; // @dynamic debugInfo;
@property(retain, nonatomic) NSMutableArray *defunctMediasArray; // @dynamic defunctMediasArray;
@property(readonly, nonatomic) unsigned long long defunctMediasArray_Count; // @dynamic defunctMediasArray_Count;
@property(retain, nonatomic) NSMutableArray *entriesArray; // @dynamic entriesArray;
@property(readonly, nonatomic) unsigned long long entriesArray_Count; // @dynamic entriesArray_Count;
@property(nonatomic) _Bool hasMore; // @dynamic hasMore;
@property(nonatomic) _Bool hasQuota; // @dynamic hasQuota;
@property(nonatomic) _Bool hasUserSettings; // @dynamic hasUserSettings;
@property(nonatomic) long long highestSeqnum; // @dynamic highestSeqnum;
@property(nonatomic) long long lastSeqnum; // @dynamic lastSeqnum;
@property(nonatomic) long long lowestSeqnum; // @dynamic lowestSeqnum;
@property(retain, nonatomic) SCPBGalleryServletQuota *quota; // @dynamic quota;
@property(nonatomic) int serviceStatusCode; // @dynamic serviceStatusCode;
@property(copy, nonatomic) NSString *syncToken; // @dynamic syncToken;
@property(nonatomic) int totalEntryCount; // @dynamic totalEntryCount;
@property(retain, nonatomic) SCPBGalleryServletGalleryUserSetting *userSettings; // @dynamic userSettings;
@property(copy, nonatomic) NSString *userString; // @dynamic userString;

@end

