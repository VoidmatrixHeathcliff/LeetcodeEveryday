class Solution:
    def reverseBits(self, n: int) -> int:
        bits = list('{0:b}'.format(n).zfill(32))
        bits.reverse()
        return int(''.join(bits), base=2)