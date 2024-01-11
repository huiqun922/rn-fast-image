import React from 'react';
import { View } from 'react-native';

interface IconProps {
  size?: number;
  name: string;
  color: string;
}

export function Icon({ size, color }: IconProps) {
  return <View style={{ width: size, height: size, backgroundColor: color }} />;
}
