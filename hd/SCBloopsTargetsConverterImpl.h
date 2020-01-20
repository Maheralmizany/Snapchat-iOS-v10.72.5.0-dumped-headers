//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCBloopsTargetsConverter.h"

@class NSString;

@interface SCBloopsTargetsConverterImpl : NSObject <SCBloopsTargetsConverter>
{
}

- (id)targetFromProceccedData:(id)arg1 imageIdentifier:(id)arg2 friendBloopsGender:(long long)arg3 hairStyle:(id)arg4 error:(id *)arg5;
- (id)targetFromImageData:(id)arg1 imageIdentifier:(id)arg2 friendBloopsGender:(long long)arg3 hairStyle:(id)arg4 error:(id *)arg5;
- (id)proceccedDataFromTarget:(id)arg1 error:(id *)arg2;
- (id)imageDataFromTarget:(id)arg1 error:(id *)arg2;
- (id)initWithPersonProcessorService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
