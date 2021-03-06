//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@protocol SCBloopsTargetsConverter <NSObject>
- (id <SCBloopsTarget>)targetFromProceccedData:(NSData *)arg1 imageIdentifier:(NSString *)arg2 friendBloopsGender:(long long)arg3 hairStyle:(NSString *)arg4 error:(id *)arg5;
- (id <SCBloopsTarget>)targetFromImageData:(NSData *)arg1 imageIdentifier:(NSString *)arg2 friendBloopsGender:(long long)arg3 hairStyle:(NSString *)arg4 error:(id *)arg5;
- (NSData *)proceccedDataFromTarget:(id <SCBloopsTarget>)arg1 error:(id *)arg2;
- (NSData *)imageDataFromTarget:(id <SCBloopsTarget>)arg1 error:(id *)arg2;
@end

