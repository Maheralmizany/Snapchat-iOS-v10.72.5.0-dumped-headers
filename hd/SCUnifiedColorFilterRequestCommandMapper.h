//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCImageProcessCommandMapping.h"

@interface SCUnifiedColorFilterRequestCommandMapper : NSObject <SCImageProcessCommandMapping>
{
    id <SCImageProcessCommandMapping> _defaultMapper;
    id <SCUnifiedCameraObjectCommandMapping> _ucoMapper;
    _Bool _isVideo;
}

- (void).cxx_destruct;
- (void)_processCommands:(id)arg1 ucoCommands:(id)arg2 regularCommands:(id)arg3;
- (_Bool)_isCommandContainerUCOCompatible:(id)arg1;
- (_Bool)_isCommandUcoConvertible:(id)arg1;
- (id)_ucoMappedCommandsFromCommandContainer:(id)arg1;
- (id)mappedCommandsFromCommandContainer:(id)arg1;
- (id)initWithDefaultMapper:(id)arg1 ucoMapper:(id)arg2 isVideo:(_Bool)arg3;

@end

