//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface MLBGitResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) unsigned int bootloaderCrc32; // @dynamic bootloaderCrc32;
@property(copy, nonatomic) NSString *bootloaderGitSha; // @dynamic bootloaderGitSha;
@property(copy, nonatomic) NSString *branch; // @dynamic branch;
@property(copy, nonatomic) NSString *buildConfig; // @dynamic buildConfig;
@property(copy, nonatomic) NSString *commitSha; // @dynamic commitSha;
@property(nonatomic) _Bool hasBootloaderCrc32; // @dynamic hasBootloaderCrc32;
@property(nonatomic) _Bool hasBootloaderGitSha; // @dynamic hasBootloaderGitSha;
@property(nonatomic) _Bool hasBranch; // @dynamic hasBranch;
@property(nonatomic) _Bool hasBuildConfig; // @dynamic hasBuildConfig;
@property(nonatomic) _Bool hasCommitSha; // @dynamic hasCommitSha;
@property(nonatomic) _Bool hasTag; // @dynamic hasTag;
@property(copy, nonatomic) NSString *tag; // @dynamic tag;

@end

