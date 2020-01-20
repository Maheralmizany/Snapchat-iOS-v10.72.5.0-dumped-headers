//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBBoolValue, GPBFloatValue, GPBInt32Value, GPBStringValue;

@interface SCAdsViewContext : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBInt32Value *adIndexPos; // @dynamic adIndexPos;
@property(retain, nonatomic) GPBFloatValue *audioPlaybackVolume; // @dynamic audioPlaybackVolume;
@property(retain, nonatomic) GPBInt32Value *autoAdvanceCount; // @dynamic autoAdvanceCount;
@property(retain, nonatomic) GPBInt32Value *autoAdvanceIndex; // @dynamic autoAdvanceIndex;
@property(retain, nonatomic) GPBStringValue *editionId; // @dynamic editionId;
@property(nonatomic) int exitEvent; // @dynamic exitEvent;
@property(nonatomic) _Bool hasAdIndexPos; // @dynamic hasAdIndexPos;
@property(nonatomic) _Bool hasAudioPlaybackVolume; // @dynamic hasAudioPlaybackVolume;
@property(nonatomic) _Bool hasAutoAdvanceCount; // @dynamic hasAutoAdvanceCount;
@property(nonatomic) _Bool hasAutoAdvanceIndex; // @dynamic hasAutoAdvanceIndex;
@property(nonatomic) _Bool hasEditionId; // @dynamic hasEditionId;
@property(nonatomic) _Bool hasIsArchivedEdition; // @dynamic hasIsArchivedEdition;
@property(nonatomic) _Bool hasPosterId; // @dynamic hasPosterId;
@property(nonatomic) _Bool hasPublisherId; // @dynamic hasPublisherId;
@property(nonatomic) _Bool hasSnapCount; // @dynamic hasSnapCount;
@property(nonatomic) _Bool hasSnapIndex; // @dynamic hasSnapIndex;
@property(nonatomic) _Bool hasStoriesLeft; // @dynamic hasStoriesLeft;
@property(nonatomic) _Bool hasUseTrackAndGet; // @dynamic hasUseTrackAndGet;
@property(nonatomic) int intendedPosition; // @dynamic intendedPosition;
@property(retain, nonatomic) GPBBoolValue *isArchivedEdition; // @dynamic isArchivedEdition;
@property(retain, nonatomic) GPBStringValue *posterId; // @dynamic posterId;
@property(retain, nonatomic) GPBStringValue *publisherId; // @dynamic publisherId;
@property(nonatomic) int renderedPosition; // @dynamic renderedPosition;
@property(retain, nonatomic) GPBInt32Value *snapCount; // @dynamic snapCount;
@property(retain, nonatomic) GPBInt32Value *snapIndex; // @dynamic snapIndex;
@property(retain, nonatomic) GPBInt32Value *storiesLeft; // @dynamic storiesLeft;
@property(retain, nonatomic) GPBBoolValue *useTrackAndGet; // @dynamic useTrackAndGet;
@property(nonatomic) int viewSource; // @dynamic viewSource;

@end

