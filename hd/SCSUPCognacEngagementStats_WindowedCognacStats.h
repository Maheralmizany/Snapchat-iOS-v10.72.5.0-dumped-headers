//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCSUPCognacEngagementStats_ActionCounts;

@interface SCSUPCognacEngagementStats_WindowedCognacStats : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCSUPCognacEngagementStats_ActionCounts *actionCountsSinceLastMonth; // @dynamic actionCountsSinceLastMonth;
@property(retain, nonatomic) SCSUPCognacEngagementStats_ActionCounts *actionCountsSinceLastThreeMonths; // @dynamic actionCountsSinceLastThreeMonths;
@property(retain, nonatomic) SCSUPCognacEngagementStats_ActionCounts *actionCountsSinceLastWeek; // @dynamic actionCountsSinceLastWeek;
@property(nonatomic) _Bool hasActionCountsSinceLastMonth; // @dynamic hasActionCountsSinceLastMonth;
@property(nonatomic) _Bool hasActionCountsSinceLastThreeMonths; // @dynamic hasActionCountsSinceLastThreeMonths;
@property(nonatomic) _Bool hasActionCountsSinceLastWeek; // @dynamic hasActionCountsSinceLastWeek;

@end

