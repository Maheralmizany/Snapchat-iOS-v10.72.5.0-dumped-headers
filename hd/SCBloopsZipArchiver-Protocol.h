//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol SCBloopsZipArchiver <NSObject>
- (_Bool)createZipFileAtPath:(NSString *)arg1 withContentsOfDirectory:(NSString *)arg2 error:(id *)arg3;
- (_Bool)unzipFileAtPath:(NSString *)arg1 toDestinationPath:(NSString *)arg2 error:(id *)arg3;
@end

