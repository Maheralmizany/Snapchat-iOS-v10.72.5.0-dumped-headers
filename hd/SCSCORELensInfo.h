//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, SCSCOREAppVersionRange, SCSCORELensSchedule, SCSCORELensThumbnail;

@interface SCSCORELensInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool allowedInDiscover; // @dynamic allowedInDiscover;
@property(retain, nonatomic) SCSCOREAppVersionRange *androidVersion; // @dynamic androidVersion;
@property(retain, nonatomic) NSMutableArray *blacklistedCountriesArray; // @dynamic blacklistedCountriesArray;
@property(readonly, nonatomic) unsigned long long blacklistedCountriesArray_Count; // @dynamic blacklistedCountriesArray_Count;
@property(copy, nonatomic) NSString *brandName; // @dynamic brandName;
@property(copy, nonatomic) NSString *creatorBitmojiAvatarId; // @dynamic creatorBitmojiAvatarId;
@property(copy, nonatomic) NSString *creatorBitmojiAvatarSelfieId; // @dynamic creatorBitmojiAvatarSelfieId;
@property(copy, nonatomic) NSString *creatorName; // @dynamic creatorName;
@property(copy, nonatomic) NSString *creatorUuid; // @dynamic creatorUuid;
@property(copy, nonatomic) NSString *deeplinkURL; // @dynamic deeplinkURL;
@property(nonatomic) _Bool hasAndroidVersion; // @dynamic hasAndroidVersion;
@property(nonatomic) _Bool hasIosVersion; // @dynamic hasIosVersion;
@property(nonatomic) _Bool hasSchedule; // @dynamic hasSchedule;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(copy, nonatomic) NSString *iconURL; // @dynamic iconURL;
@property(retain, nonatomic) SCSCOREAppVersionRange *iosVersion; // @dynamic iosVersion;
@property(nonatomic) _Bool isCommunity; // @dynamic isCommunity;
@property(nonatomic) _Bool isOfficialCreator; // @dynamic isOfficialCreator;
@property(nonatomic) _Bool isPrivate; // @dynamic isPrivate;
@property(nonatomic) _Bool isSnappable; // @dynamic isSnappable;
@property(nonatomic) _Bool isSponsored; // @dynamic isSponsored;
@property(nonatomic) long long lensApprovalTsSecs; // @dynamic lensApprovalTsSecs;
@property(nonatomic) long long lensCreationTsSecs; // @dynamic lensCreationTsSecs;
@property(copy, nonatomic) NSString *lensId; // @dynamic lensId;
@property(copy, nonatomic) NSString *lensName; // @dynamic lensName;
@property(nonatomic) long long lensUpdateTsSecs; // @dynamic lensUpdateTsSecs;
@property(retain, nonatomic) SCSCORELensSchedule *schedule; // @dynamic schedule;
@property(nonatomic) _Bool supportsBackCamera; // @dynamic supportsBackCamera;
@property(nonatomic) _Bool supportsSelfie; // @dynamic supportsSelfie;
@property(retain, nonatomic) SCSCORELensThumbnail *thumbnail; // @dynamic thumbnail;
@property(retain, nonatomic) NSMutableArray *whitelistedCountriesArray; // @dynamic whitelistedCountriesArray;
@property(readonly, nonatomic) unsigned long long whitelistedCountriesArray_Count; // @dynamic whitelistedCountriesArray_Count;

@end

